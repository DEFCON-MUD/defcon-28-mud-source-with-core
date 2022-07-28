inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 22, 0 }));
  set_short( "Hallway - x58y22z0" );
set_objects( DIR+"/npc/angryweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y22z0.c",
  "east" : DIR+"/rooms/x59y22z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
