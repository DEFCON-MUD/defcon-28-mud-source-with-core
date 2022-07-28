inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 30, 9 }));
  set_short( "Corridor - x49y30z9" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x48y30z9.c",
  "east" : DIR+"/rooms/x50y30z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the glorzo in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
