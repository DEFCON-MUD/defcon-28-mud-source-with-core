inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 48, 5 }));
  set_short( "Hallway - x17y48z5" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y48z5.c",
  "east" : DIR+"/rooms/x18y48z5.c",
  "north" : DIR+"/rooms/x17y49z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
