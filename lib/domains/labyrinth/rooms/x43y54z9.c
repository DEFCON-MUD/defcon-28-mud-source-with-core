inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 54, 9 }));
  set_short( "Hallway - x43y54z9" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y54z9.c",
  "south" : DIR+"/rooms/x43y53z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the glorzo in this joint. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
