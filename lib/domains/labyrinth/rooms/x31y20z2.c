inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 20, 2 }));
  set_short( "Passage - x31y20z2" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y21z2.c",
  "south" : DIR+"/rooms/x31y19z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
