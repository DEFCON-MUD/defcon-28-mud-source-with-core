inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 46, 5 }));
  set_short( "Corridor - x19y46z5" );
set_objects( DIR+"/npc/sewerboss.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y46z5.c",
  "south" : DIR+"/rooms/x19y45z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
