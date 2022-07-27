inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 40, 8 }));
  set_short( "Hallway - x29y40z8" );
set_objects( DIR+"/monsters/koreth.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y40z8.c",
  "east" : DIR+"/rooms/x30y40z8.c",
  "north" : DIR+"/rooms/x29y41z8.c",
  "south" : DIR+"/rooms/x29y39z8.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
