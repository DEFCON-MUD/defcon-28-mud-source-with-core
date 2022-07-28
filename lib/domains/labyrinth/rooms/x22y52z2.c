inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 52, 2 }));
  set_short( "Hallway - x22y52z2" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y52z2.c",
  "east" : DIR+"/rooms/x23y52z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
