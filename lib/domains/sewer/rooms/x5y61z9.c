inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 61, 9 }));
  set_short( "Corridor - x5y61z9" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y62z9.c",
  "south" : DIR+"/rooms/x5y60z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
