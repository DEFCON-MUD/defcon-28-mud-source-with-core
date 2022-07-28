inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 64, 7 }));
  set_short( "Passage - x53y64z7" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y64z7.c",
  "east" : DIR+"/rooms/x54y64z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
