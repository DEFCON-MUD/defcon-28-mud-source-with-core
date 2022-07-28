inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 34, 6 }));
  set_short( "Hallway - x6y34z6" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y34z6.c",
  "east" : DIR+"/rooms/x7y34z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
