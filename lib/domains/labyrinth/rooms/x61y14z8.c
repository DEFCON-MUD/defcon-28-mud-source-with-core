inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 14, 8 }));
  set_short( "Passage - x61y14z8" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y14z8.c",
  "south" : DIR+"/rooms/x61y13z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
