inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 42, 8 }));
  set_short( "Passage - x23y42z8" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y42z8.c",
  "north" : DIR+"/rooms/x23y43z8.c",
  "south" : DIR+"/rooms/x23y41z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, north, and west.%^RESET%^");
}
