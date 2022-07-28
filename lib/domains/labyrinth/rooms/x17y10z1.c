inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 10, 1 }));
  set_short( "Hallway - x17y10z1" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y10z1.c",
  "south" : DIR+"/rooms/x17y9z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
