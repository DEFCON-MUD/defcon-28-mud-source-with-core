inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 42, 4 }));
  set_short( "Corridor - x39y42z4" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y42z4.c",
  "east" : DIR+"/rooms/x40y42z4.c",
  "north" : DIR+"/rooms/x39y43z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, east, and north.%^RESET%^");
}
