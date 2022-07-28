inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 28, 8 }));
  set_short( "Hallway - x29y28z8" );
set_objects( DIR+"/npc/slowzombie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y28z8.c",
  "east" : DIR+"/rooms/x30y28z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
