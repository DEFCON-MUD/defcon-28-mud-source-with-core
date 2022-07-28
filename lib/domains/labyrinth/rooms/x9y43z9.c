inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 43, 9 }));
  set_short( "Hallway - x9y43z9" );
set_objects( DIR+"/npc/securityofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y44z9.c",
  "south" : DIR+"/rooms/x9y42z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
