inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 42, 1 }));
  set_short( "Hallway - x44y42z1" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y42z1.c",
  "east" : DIR+"/rooms/x45y42z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the glorzo in this stink-pit. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
