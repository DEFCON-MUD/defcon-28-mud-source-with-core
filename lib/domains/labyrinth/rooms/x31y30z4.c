inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 30, 4 }));
  set_short( "Corridor - x31y30z4" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y30z4.c",
  "east" : DIR+"/rooms/x32y30z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
