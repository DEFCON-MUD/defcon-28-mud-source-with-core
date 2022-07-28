inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 36, 8 }));
  set_short( "Hallway - x9y36z8" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y36z8.c",
  "north" : DIR+"/rooms/x9y37z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
