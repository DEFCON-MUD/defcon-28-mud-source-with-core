inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 12, 6 }));
  set_short( "Hallway - x22y12z6" );
set_objects( DIR+"/npc/ursula.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y12z6.c",
  "east" : DIR+"/rooms/x23y12z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
