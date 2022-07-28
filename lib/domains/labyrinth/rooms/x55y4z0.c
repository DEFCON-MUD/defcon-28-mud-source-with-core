inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 4, 0 }));
  set_short( "Passage - x55y4z0" );
set_objects( DIR+"/npc/weevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y4z0.c",
  "south" : DIR+"/rooms/x55y3z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
