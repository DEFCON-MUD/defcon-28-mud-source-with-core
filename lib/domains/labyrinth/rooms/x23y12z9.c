inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 12, 9 }));
  set_short( "Corridor - x23y12z9" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y12z9.c",
  "north" : DIR+"/rooms/x23y13z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
