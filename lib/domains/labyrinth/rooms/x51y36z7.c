inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 36, 7 }));
  set_short( "Hallway - x51y36z7" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y36z7.c",
  "east" : DIR+"/rooms/x52y36z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
