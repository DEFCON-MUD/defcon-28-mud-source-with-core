inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 40, 1 }));
  set_short( "Passage - x59y40z1" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y40z1.c",
  "east" : DIR+"/rooms/x60y40z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
