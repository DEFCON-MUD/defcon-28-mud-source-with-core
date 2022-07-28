inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 10, 1 }));
  set_short( "Hallway - x33y10z1" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y10z1.c",
  "east" : DIR+"/rooms/x34y10z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
