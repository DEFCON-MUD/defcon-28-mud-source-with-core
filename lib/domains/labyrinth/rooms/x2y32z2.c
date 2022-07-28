inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 32, 2 }));
  set_short( "Hallway - x2y32z2" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y32z2.c",
  "east" : DIR+"/rooms/x3y32z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
