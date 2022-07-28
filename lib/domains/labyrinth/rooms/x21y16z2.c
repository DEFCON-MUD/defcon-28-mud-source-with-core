inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 16, 2 }));
  set_short( "Hallway - x21y16z2" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y16z2.c",
  "east" : DIR+"/rooms/x22y16z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
