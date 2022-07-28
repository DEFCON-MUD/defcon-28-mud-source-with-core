inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 36, 8 }));
  set_short( "Corridor - x43y36z8" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y36z8.c",
  "north" : DIR+"/rooms/x43y37z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
