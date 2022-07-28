inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 46, 3 }));
  set_short( "Corridor - x33y46z3" );
set_objects( DIR+"/npc/antoinnete.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y46z3.c",
  "south" : DIR+"/rooms/x33y45z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this dump. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
