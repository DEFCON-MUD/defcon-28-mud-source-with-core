inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 12, 1 }));
  set_short( "Passage - x29y12z1" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y12z1.c",
  "south" : DIR+"/rooms/x29y11z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the sludge in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
