inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 11, 9 }));
  set_short( "Corridor - x31y11z9" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y12z9.c",
  "south" : DIR+"/rooms/x31y10z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
