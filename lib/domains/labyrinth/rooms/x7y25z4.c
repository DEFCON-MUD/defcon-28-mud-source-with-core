inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 25, 4 }));
  set_short( "Corridor - x7y25z4" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y26z4.c",
  "south" : DIR+"/rooms/x7y24z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
