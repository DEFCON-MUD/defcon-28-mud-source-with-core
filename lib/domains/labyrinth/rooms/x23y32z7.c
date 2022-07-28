inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 32, 7 }));
  set_short( "Hallway - x23y32z7" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y32z7.c",
  "east" : DIR+"/rooms/x24y32z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the radioactive waste in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
