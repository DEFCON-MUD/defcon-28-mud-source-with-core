inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 8, 2 }));
  set_short( "Hallway - x5y8z2" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y9z2.c",
  "south" : DIR+"/rooms/x5y7z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
