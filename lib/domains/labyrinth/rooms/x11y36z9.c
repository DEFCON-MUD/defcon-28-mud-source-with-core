inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 36, 9 }));
  set_short( "Corridor - x11y36z9" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y36z9.c",
  "north" : DIR+"/rooms/x11y37z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
