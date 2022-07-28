inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 16, 9 }));
  set_short( "Hallway - x44y16z9" );
set_objects( DIR+"/npc/eastfilingclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y16z9.c",
  "east" : DIR+"/rooms/x45y16z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the gunk in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
