inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 61, 8 }));
  set_short( "Hallway - x5y61z8" );
set_objects( DIR+"/monsters/loser.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y62z8.c",
  "south" : DIR+"/rooms/x5y60z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the radioactive waste in this sty. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
