inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 7, 8 }));
  set_short( "Corridor - x1y7z8" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y8z8.c",
  "south" : DIR+"/rooms/x1y6z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
