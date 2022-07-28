inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 46, 1 }));
  set_short( "Hallway - x57y46z1" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y46z1.c",
  "north" : DIR+"/rooms/x57y47z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the sludge in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
