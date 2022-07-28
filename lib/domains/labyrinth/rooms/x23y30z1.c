inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 30, 1 }));
  set_short( "Hallway - x23y30z1" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y30z1.c",
  "east" : DIR+"/rooms/x24y30z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
