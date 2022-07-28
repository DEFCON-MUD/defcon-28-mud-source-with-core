inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 54, 8 }));
  set_short( "Corridor - x29y54z8" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y54z8.c",
  "south" : DIR+"/rooms/x29y53z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
