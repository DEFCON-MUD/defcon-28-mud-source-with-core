inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 18, 4 }));
  set_short( "Corridor - x16y18z4" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y18z4.c",
  "east" : DIR+"/rooms/x17y18z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
