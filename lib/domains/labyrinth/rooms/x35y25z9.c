inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 25, 9 }));
  set_short( "Hallway - x35y25z9" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y26z9.c",
  "south" : DIR+"/rooms/x35y24z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
