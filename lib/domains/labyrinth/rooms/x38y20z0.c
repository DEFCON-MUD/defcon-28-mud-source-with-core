inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 20, 0 }));
  set_short( "Passage - x38y20z0" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y20z0.c",
  "east" : DIR+"/rooms/x39y20z0.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
