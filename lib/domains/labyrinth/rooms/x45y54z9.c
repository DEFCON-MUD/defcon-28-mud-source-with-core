inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 54, 9 }));
  set_short( "Corridor - x45y54z9" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x44y54z9.c",
  "east" : DIR+"/rooms/x46y54z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
