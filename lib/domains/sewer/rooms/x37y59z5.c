inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 59, 5 }));
  set_short( "Passage - x37y59z5" );
set_objects( DIR+"/monsters/lyndia.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y60z5.c",
  "south" : DIR+"/rooms/x37y58z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
