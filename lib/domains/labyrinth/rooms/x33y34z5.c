inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 34, 5 }));
  set_short( "Corridor - x33y34z5" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y34z5.c",
  "south" : DIR+"/rooms/x33y33z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
