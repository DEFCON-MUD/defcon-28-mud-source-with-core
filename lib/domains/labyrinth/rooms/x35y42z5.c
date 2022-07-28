inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 42, 5 }));
  set_short( "Passage - x35y42z5" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y43z5.c",
  "south" : DIR+"/rooms/x35y41z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
