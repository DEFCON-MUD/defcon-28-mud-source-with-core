inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 8, 4 }));
  set_short( "Hallway - x3y8z4" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y8z4.c",
  "south" : DIR+"/rooms/x3y7z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
