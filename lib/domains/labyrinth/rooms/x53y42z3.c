inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 42, 3 }));
  set_short( "Corridor - x53y42z3" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y42z3.c",
  "south" : DIR+"/rooms/x53y41z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
