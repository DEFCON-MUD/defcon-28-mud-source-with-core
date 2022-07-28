inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 62, 0 }));
  set_short( "Passage - x50y62z0" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y62z0.c",
  "east" : DIR+"/rooms/x51y62z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this dump. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
