inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 42, 0 }));
  set_short( "Hallway - x30y42z0" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y42z0.c",
  "east" : DIR+"/rooms/x31y42z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
