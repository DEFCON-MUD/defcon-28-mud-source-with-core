inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 11, 4 }));
  set_short( "Corridor - x59y11z4" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y12z4.c",
  "south" : DIR+"/rooms/x59y10z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
