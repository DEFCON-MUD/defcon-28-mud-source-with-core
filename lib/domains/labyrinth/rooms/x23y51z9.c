inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 51, 9 }));
  set_short( "Hallway - x23y51z9" );
set_objects( DIR+"/npc/r1hannah.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y52z9.c",
  "south" : DIR+"/rooms/x23y50z9.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
